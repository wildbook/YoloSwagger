#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderSummonerResource_t {
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderSummonerResource_t& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderSummonerResource_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderSummonerResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
