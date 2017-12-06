#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsMatchMakerPayload_t {
    std::string LEAVER_BUSTER_ACCESS_TOKEN;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerPayload_t& v) {
    j["LEAVER_BUSTER_ACCESS_TOKEN"] = v.LEAVER_BUSTER_ACCESS_TOKEN;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerPayload_t& v) {
    v.LEAVER_BUSTER_ACCESS_TOKEN = j.at("LEAVER_BUSTER_ACCESS_TOKEN").get<std::string>();
  }
}
