#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderSummonerResource_t {
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderSummonerResource_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderSummonerResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderSummonerResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
