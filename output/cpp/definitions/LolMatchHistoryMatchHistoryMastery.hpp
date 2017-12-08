#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryMastery_t {
    uint16_t masteryId;
    uint16_t rank;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryMastery_t& v) {
    j["masteryId"] = v.masteryId;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryMastery_t& v) {
    v.masteryId = j.at("masteryId").get<uint16_t>();
    v.rank = j.at("rank").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryMastery_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
