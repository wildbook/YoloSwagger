#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BasePublicSummonerDTO_t {
    int32_t profileIconId;
    std::string puuid;
    std::string internalName;
    std::string previousSeasonHighestTier;
    std::string name;
    uint64_t sumId;
    uint64_t acctId;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["internalName"] = v.internalName;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["name"] = v.name;
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
  }
  inline std::string to_string(const BasePublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
