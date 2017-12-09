#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  struct MatchmakingSearchResource_t {
    std::vector<MatchmakingSearchErrorResource_t> errors;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingSearchResource_t& v) {
    j["errors"] = v.errors;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingSearchResource_t& v) {
    v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const MatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
