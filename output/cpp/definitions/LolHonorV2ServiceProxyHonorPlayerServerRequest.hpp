#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest_t {
    std::string honorType;
    uint64_t summonerId;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    j["honorType"] = v.honorType;
    j["summonerId"] = v.summonerId;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    v.honorType = j.at("honorType").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
  inline std::string to_string(const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
