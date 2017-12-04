#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdropType_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdropType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolCollectionsCollectionsSummonerBackdropType {
    // 
    default = 0,
    // 
    highest-mastery = 3,
    // 
    recently-played = 2,
    // 
    summoner-icon = 1,
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdropType& v) {
    switch(v) {
      case LolCollectionsCollectionsSummonerBackdropType::default:
        j = "default";
      break;
      case LolCollectionsCollectionsSummonerBackdropType::highest-mastery:
        j = "highest-mastery";
      break;
      case LolCollectionsCollectionsSummonerBackdropType::recently-played:
        j = "recently-played";
      break;
      case LolCollectionsCollectionsSummonerBackdropType::summoner-icon:
        j = "summoner-icon";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdropType& v) {
    const auto& s = j.get<std::string>();
    if(s == "default"){
      v = LolCollectionsCollectionsSummonerBackdropType::default;
      return;
    }
    if(s == "highest-mastery"){
      v = LolCollectionsCollectionsSummonerBackdropType::highest-mastery;
      return;
    }
    if(s == "recently-played"){
      v = LolCollectionsCollectionsSummonerBackdropType::recently-played;
      return;
    }
    if(s == "summoner-icon"){
      v = LolCollectionsCollectionsSummonerBackdropType::summoner-icon;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdropType_HPP
