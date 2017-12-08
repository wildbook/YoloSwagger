#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2Honor.hpp"
namespace leagueapi {
  struct LolHonorV2HonorRecipient_t {
    uint64_t_t gameId;
    std::vector<LolHonorV2Honor_t> honors;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorRecipient_t& v) {
    j["gameId"] = v.gameId;
    j["honors"] = v.honors;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorRecipient_t& v) {
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.honors = j.at("honors").get<std::vector<LolHonorV2Honor_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolHonorV2HonorRecipient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
