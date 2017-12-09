#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest_t {
    uint64_t gameId;
    uint64_t summonerId;
    std::string honorType;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["honorType"] = v.honorType;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.honorType = j.at("honorType").get<std::string>();
  }
  inline std::string to_string(const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
