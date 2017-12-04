#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryRune_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryRune_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryRune {
    // 
    uint16_t runeId;
    // 
    uint16_t rank;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryRune& v) {
    j["runeId"] = v.runeId;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryRune& v) {
    v.runeId = j.at("runeId").get<uint16_t>;
    v.rank = j.at("rank").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryRune_HPP
