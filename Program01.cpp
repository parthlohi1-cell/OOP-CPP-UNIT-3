#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Media {
public:
    virtual void play() const = 0;
    virtual void pause() const = 0;
    virtual void stop() const = 0;
    virtual void showDetails() const = 0;
    virtual ~Media() = default;
};

class Audio : public Media {
private:
    string title;
    string artist;

public:
    Audio(string t, string a) : title(t), artist(a) {}

    void play() const override { cout << "Playing audio: " << title << endl; }
    void pause() const override { cout << "Pausing audio: " << title << endl; }
    void stop() const override { cout << "Stopping audio: " << title << endl; }
    void showDetails() const override {
        cout << "Audio | Title: " << title << " | Artist: " << artist << endl;
    }
};

class Video : public Media {
private:
    string title;
    string resolution;

public:
    Video(string t, string r) : title(t), resolution(r) {}

    void play() const override { cout << "Playing video: " << title << endl; }
    void pause() const override { cout << "Pausing video: " << title << endl; }
    void stop() const override { cout << "Stopping video: " << title << endl; }
    void showDetails() const override {
        cout << "Video | Title: " << title << " | Resolution: " << resolution << endl;
    }
};

class Image : public Media {
private:
    string filename;
    string format;

public:
    Image(string f, string fmt) : filename(f), format(fmt) {}

    void play() const override { cout << "Displaying image: " << filename << endl; }
    void pause() const override { cout << "Image paused: " << filename << endl; }
    void stop() const override { cout << "Image closed: " << filename << endl; }
    void showDetails() const override {
        cout << "Image | File: " << filename << " | Format: " << format << endl;
    }
};

int main() {
    vector<unique_ptr<Media>> playlist;
    playlist.push_back(make_unique<Audio>("Song1", "ArtistA"));
    playlist.push_back(make_unique<Video>("MovieClip", "1080p"));
    playlist.push_back(make_unique<Image>("Photo1", "JPEG"));

    cout << "=== Media Player ===" << endl;
    for (const auto& media : playlist) {
        media->play();
        media->showDetails();
        media->pause();
        media->stop();
        cout << endl;
    }

    return 0;
}
