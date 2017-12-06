#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BasePublicSummonerDTO_t {
    uint64_t sumId;
    std::string name;
    std::string puuid;
    int32_t profileIconId;
    std::string internalName;
    std::string previousSeasonHighestTier;
    uint64_t acctId;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO_t& v) {
    j["sumId"] = v.sumId;
    j["name"] = v.name;
    j["puuid"] = v.puuid;
    j["profileIconId"] = v.profileIconId;
    j["internalName"] = v.internalName;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["acctId"] = v.acctId;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO_t& v) {
    v.sumId = j.at("sumId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.acctId = j.at("acctId").get<uint64_t>();
  }
}
