#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersQueue_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersQueue {
    // 
    int32_t id;
    // 
    uint32_t minLevel;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersQueue& v) {
    j["id"] = v.id;
    j["minLevel"] = v.minLevel;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersQueue& v) {
    v.id = j.at("id").get<int32_t>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersQueue_HPP
