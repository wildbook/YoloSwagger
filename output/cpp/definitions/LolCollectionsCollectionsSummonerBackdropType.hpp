#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdropType_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdropType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolCollectionsCollectionsSummonerBackdropType {
    // 
    default = 0,
    // 
    summoner-icon = 1,
    // 
    recently-played = 2,
    // 
    highest-mastery = 3,
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdropType& v) {
    switch(v) {
      case LolCollectionsCollectionsSummonerBackdropType::default:
        j = "default";
      break;
      case LolCollectionsCollectionsSummonerBackdropType::summoner-icon:
        j = "summoner-icon";
      break;
      case LolCollectionsCollectionsSummonerBackdropType::recently-played:
        j = "recently-played";
      break;
      case LolCollectionsCollectionsSummonerBackdropType::highest-mastery:
        j = "highest-mastery";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdropType& v) {
    const auto& s = j.get<std::string>();
    if(s == "default"){
      v = LolCollectionsCollectionsSummonerBackdropType::default;
      return;
    }
    if(s == "summoner-icon"){
      v = LolCollectionsCollectionsSummonerBackdropType::summoner-icon;
      return;
    }
    if(s == "recently-played"){
      v = LolCollectionsCollectionsSummonerBackdropType::recently-played;
      return;
    }
    if(s == "highest-mastery"){
      v = LolCollectionsCollectionsSummonerBackdropType::highest-mastery;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdropType_HPP
