#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPlayerGameDelta.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerDelta_t {
    std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta_t> deltas;
    std::string originalPlatformId;
    uint64_t originalAccountId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPlayerDelta_t& v) {
    j["deltas"] = v.deltas;
    j["originalPlatformId"] = v.originalPlatformId;
    j["originalAccountId"] = v.originalAccountId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPlayerDelta_t& v) {
    v.deltas = j.at("deltas").get<std::vector<LolMatchHistoryMatchHistoryPlayerGameDelta_t>>();
    v.originalPlatformId = j.at("originalPlatformId").get<std::string>();
    v.originalAccountId = j.at("originalAccountId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPlayerDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
