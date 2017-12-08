#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryRune_t {
    uint16_t rank;
    uint16_t runeId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryRune_t& v) {
    j["rank"] = v.rank;
    j["runeId"] = v.runeId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryRune_t& v) {
    v.rank = j.at("rank").get<uint16_t>();
    v.runeId = j.at("runeId").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryRune_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
