#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPlayerGameDelta.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerDelta_t {
    uint64_t originalAccountId;
    std::string originalPlatformId;
    std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta_t> deltas;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerDelta_t& v) {
    j["originalAccountId"] = v.originalAccountId;
    j["originalPlatformId"] = v.originalPlatformId;
    j["deltas"] = v.deltas;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerDelta_t& v) {
    v.originalAccountId = j.at("originalAccountId").get<uint64_t>();
    v.originalPlatformId = j.at("originalPlatformId").get<std::string>();
    v.deltas = j.at("deltas").get<std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta_t>>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
