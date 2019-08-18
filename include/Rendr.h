#ifndef RENDR_H
#define RENDR_H
#include "Note.h"
#include "Player.h"
#include "Generator.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

class Rendr {
public:
    Rendr(sf::RenderWindow& w);
    void clicker();
    void notes(float time,std::vector<Note> &v);
    void events(float time,std::vector<Note>&ev);
    void lanes(float time, std::vector<Note>&ev);
    void pollState(float time,Player& p,Generator &g);
    virtual ~Rendr();

protected:

private:
    sf::Texture m_tex;

    sf::Sprite m_trayL,m_trayR;
    sf::Sprite m_red_click,m_green_click,m_blue_click;

    sf::Font m_font;
    sf::Text m_time_txt;
    sf::Text m_score_txt;
    sf::Text m_combo_txt;
    sf::Text m_mult_txt;

    sf::Vector2f m_start;
    sf::Vector2f m_end;
    sf::Vector2f m_vel;
    sf::Vector2f m_scl_start;
    sf::Vector2f m_scl_end;
    sf::Vector2f m_scl_vel;
    sf::RenderWindow &m_window;

    bool m_red,m_green,m_blue;
    int m_player_cross;
    bool m_scr_g = false;
    bool m_scr_b = false;

    int m_ren_cross = 1;
    const int resolution = 200;
    std::vector<int> m_lanes;

    sf::Vector2f green_center_start = sf::Vector2f(472.0,200.0);
    sf::Vector2f green_center_end = sf::Vector2f(426.0,500.0);
    sf::Vector2f green_left_start = sf::Vector2f(436.0,200.0);
    sf::Vector2f green_left_end = sf::Vector2f(338.0,500.0);

    sf::Vector2f blue_center_start = sf::Vector2f(554.0,200.0);
    sf::Vector2f blue_center_end = sf::Vector2f(600.0,500.0);
    sf::Vector2f blue_right_start = sf::Vector2f(590.0,200.0);
    sf::Vector2f blue_right_end = sf::Vector2f(688.0,500.0);

    sf::Vector2f green_center_vel = (green_center_end-green_center_start)/1.0f;
    sf::Vector2f green_left_vel = (green_left_end-green_left_start)/1.0f;

    sf::Vector2f blue_center_vel = (blue_center_end-blue_center_start)/1.0f;
    sf::Vector2f blue_right_vel = (blue_right_end-blue_right_start)/1.0f;
};

#endif // RENDR_H
