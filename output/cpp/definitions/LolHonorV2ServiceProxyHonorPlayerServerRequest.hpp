#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ServiceProxyHonorPlayerServerRequest_t {
    std::string_t honorType;
    uint64_t_t gameId;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    j["honorType"] = v.honorType;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    v.honorType = j.at("honorType").get<std::string_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolHonorV2ServiceProxyHonorPlayerServerRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
