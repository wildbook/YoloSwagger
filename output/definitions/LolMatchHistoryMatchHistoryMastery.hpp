#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryMastery_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryMastery_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryMastery {
    // 
    uint16_t masteryId;
    // 
    uint16_t rank;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryMastery& v) {
    j["masteryId"] = v.masteryId;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryMastery& v) {
    v.masteryId = j.at("masteryId").get<uint16_t>;
    v.rank = j.at("rank").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryMastery_HPP
