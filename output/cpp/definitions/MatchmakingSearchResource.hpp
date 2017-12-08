#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingSearchErrorResource.hpp"
namespace leagueapi {
  struct MatchmakingSearchResource_t {
    int32_t_t queueId;
    std::vector<MatchmakingSearchErrorResource_t> errors;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingSearchResource_t& v) {
    j["queueId"] = v.queueId;
    j["errors"] = v.errors;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingSearchResource_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.errors = j.at("errors").get<std::vector<MatchmakingSearchErrorResource_t>>();
  }
  inline std::string to_string(const MatchmakingSearchResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
