#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ApiHonorPlayerServerRequest_t {
    uint64_t gameId;
    uint64_t summonerId;
    std::string honorCategory;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ApiHonorPlayerServerRequest_t& v) {
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["honorCategory"] = v.honorCategory;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ApiHonorPlayerServerRequest_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.honorCategory = j.at("honorCategory").get<std::string>();
  }
}
