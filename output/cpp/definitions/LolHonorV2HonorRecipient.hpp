#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2Honor.hpp"
namespace leagueapi {
  struct LolHonorV2HonorRecipient_t {
    std::vector<LolHonorV2Honor_t> honors;
    uint64_t gameId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorRecipient_t& v) {
    j["honors"] = v.honors;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorRecipient_t& v) {
    v.honors = j.at("honors").get<std::vector<LolHonorV2Honor_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolHonorV2HonorRecipient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
