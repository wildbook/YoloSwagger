#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ApiHonorPlayerServerRequest_t {
    std::string honorCategory;
    uint64_t gameId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ApiHonorPlayerServerRequest_t& v) {
    j["honorCategory"] = v.honorCategory;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ApiHonorPlayerServerRequest_t& v) {
    v.honorCategory = j.at("honorCategory").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolHonorV2ApiHonorPlayerServerRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
