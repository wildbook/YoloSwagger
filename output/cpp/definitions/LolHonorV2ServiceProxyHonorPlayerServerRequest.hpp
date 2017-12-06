#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest_t {
    std::string honorType;
    uint64_t gameId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    j["honorType"] = v.honorType;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    v.honorType = j.at("honorType").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
