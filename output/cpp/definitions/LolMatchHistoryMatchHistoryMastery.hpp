#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryMastery_t {
    uint16_t rank;
    uint16_t masteryId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryMastery_t& v) {
    j["rank"] = v.rank;
    j["masteryId"] = v.masteryId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryMastery_t& v) {
    v.rank = j.at("rank").get<uint16_t>();
    v.masteryId = j.at("masteryId").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryMastery_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
