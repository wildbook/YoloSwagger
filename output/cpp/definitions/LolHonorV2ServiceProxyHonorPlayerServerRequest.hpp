#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest_t {
    uint64_t gameId;
    std::string honorType;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    j["gameId"] = v.gameId;
    j["honorType"] = v.honorType;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.honorType = j.at("honorType").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
