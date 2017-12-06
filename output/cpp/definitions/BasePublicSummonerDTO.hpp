#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BasePublicSummonerDTO_t {
    uint64_t acctId;
    std::string internalName;
    std::string name;
    std::string previousSeasonHighestTier;
    int32_t profileIconId;
    std::string puuid;
    uint64_t sumId;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO_t& v) {
    j["acctId"] = v.acctId;
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["sumId"] = v.sumId;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO_t& v) {
    v.acctId = j.at("acctId").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.sumId = j.at("sumId").get<uint64_t>();
  }
}
