#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryRune_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryRune_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryRune {
    // 
    uint16_t rank;
    // 
    uint16_t runeId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryRune& v) {
    j["rank"] = v.rank;
    j["runeId"] = v.runeId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryRune& v) {
    v.rank = j.at("rank").get<uint16_t>;
    v.runeId = j.at("runeId").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryRune_HPP
