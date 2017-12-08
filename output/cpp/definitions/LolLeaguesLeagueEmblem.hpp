#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueEmblem_t {
    VETERAN_E = 0,
    HOTSTREAK_E = 1,
    FRESHBLOOD_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueEmblem_t& v) {
    switch(v) {
      case LolLeaguesLeagueEmblem_t::VETERAN_E:
        j = "VETERAN";
      break;
      case LolLeaguesLeagueEmblem_t::HOTSTREAK_E:
        j = "HOTSTREAK";
      break;
      case LolLeaguesLeagueEmblem_t::FRESHBLOOD_E:
        j = "FRESHBLOOD";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueEmblem_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "VETERAN"){
      v = LolLeaguesLeagueEmblem_t::VETERAN_E;
      return;
    }
    if(s == "HOTSTREAK"){
      v = LolLeaguesLeagueEmblem_t::HOTSTREAK_E;
      return;
    }
    if(s == "FRESHBLOOD"){
      v = LolLeaguesLeagueEmblem_t::FRESHBLOOD_E;
      return;
    }
  }
  inline std::string to_string(const LolLeaguesLeagueEmblem_t& v) {
    switch(v) {
      case LolLeaguesLeagueEmblem_t::VETERAN_E:
        return "VETERAN";
      case LolLeaguesLeagueEmblem_t::HOTSTREAK_E:
        return "HOTSTREAK";
      case LolLeaguesLeagueEmblem_t::FRESHBLOOD_E:
        return "FRESHBLOOD";
    }
  }

}
