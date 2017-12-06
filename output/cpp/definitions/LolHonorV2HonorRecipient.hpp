#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2Honor.hpp"
namespace leagueapi {
  struct LolHonorV2HonorRecipient_t {
    uint64_t gameId;
    uint64_t summonerId;
    std::vector<LolHonorV2Honor_t> honors;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorRecipient_t& v) {
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["honors"] = v.honors;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorRecipient_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.honors = j.at("honors").get<std::vector<LolHonorV2Honor_t>>();
  }
}
