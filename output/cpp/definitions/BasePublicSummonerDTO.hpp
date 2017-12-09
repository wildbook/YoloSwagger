#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BasePublicSummonerDTO_t {
    std::string previousSeasonHighestTier;
    std::string internalName;
    uint64_t acctId;
    std::string name;
    uint64_t sumId;
    int32_t profileIconId;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO_t& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["internalName"] = v.internalName;
    j["acctId"] = v.acctId;
    j["name"] = v.name;
    j["sumId"] = v.sumId;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO_t& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const BasePublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
