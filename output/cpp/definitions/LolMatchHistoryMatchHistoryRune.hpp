#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryRune_t {
    uint16_t runeId;
    uint16_t rank;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryRune_t& v) {
    j["runeId"] = v.runeId;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryRune_t& v) {
    v.runeId = j.at("runeId").get<uint16_t>();
    v.rank = j.at("rank").get<uint16_t>();
  }
}
