#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BasePublicSummonerDTO_t {
    std::string puuid;
    std::string previousSeasonHighestTier;
    uint64_t sumId;
    std::string internalName;
    int32_t profileIconId;
    uint64_t acctId;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO_t& v) {
    j["puuid"] = v.puuid;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["sumId"] = v.sumId;
    j["internalName"] = v.internalName;
    j["profileIconId"] = v.profileIconId;
    j["acctId"] = v.acctId;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO_t& v) {
    v.puuid = j.at("puuid").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const BasePublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
