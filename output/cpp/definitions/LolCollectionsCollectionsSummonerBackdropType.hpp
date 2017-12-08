#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolCollectionsCollectionsSummonerBackdropType_t {
    default_E = 0,
    summoner-icon_E = 1,
    recently-played_E = 2,
    highest-mastery_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdropType_t& v) {
    switch(v) {
      case LolCollectionsCollectionsSummonerBackdropType_t::default_E:
        j = "default";
      break;
      case LolCollectionsCollectionsSummonerBackdropType_t::summoner-icon_E:
        j = "summoner-icon";
      break;
      case LolCollectionsCollectionsSummonerBackdropType_t::recently-played_E:
        j = "recently-played";
      break;
      case LolCollectionsCollectionsSummonerBackdropType_t::highest-mastery_E:
        j = "highest-mastery";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdropType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "default"){
      v = LolCollectionsCollectionsSummonerBackdropType_t::default_E;
      return;
    }
    if(s == "summoner-icon"){
      v = LolCollectionsCollectionsSummonerBackdropType_t::summoner-icon_E;
      return;
    }
    if(s == "recently-played"){
      v = LolCollectionsCollectionsSummonerBackdropType_t::recently-played_E;
      return;
    }
    if(s == "highest-mastery"){
      v = LolCollectionsCollectionsSummonerBackdropType_t::highest-mastery_E;
      return;
    }
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerBackdropType_t& v) {
    switch(v) {
      case LolCollectionsCollectionsSummonerBackdropType_t::default_E:
        return "default";
      case LolCollectionsCollectionsSummonerBackdropType_t::summoner-icon_E:
        return "summoner-icon";
      case LolCollectionsCollectionsSummonerBackdropType_t::recently-played_E:
        return "recently-played";
      case LolCollectionsCollectionsSummonerBackdropType_t::highest-mastery_E:
        return "highest-mastery";
    }
  }

}
