#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BasePublicSummonerDTO_t {
    std::string_t internalName;
    std::string_t name;
    int32_t_t profileIconId;
    std::string_t puuid;
    uint64_t_t sumId;
    uint64_t_t acctId;
    std::string_t previousSeasonHighestTier;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO_t& v) {
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO_t& v) {
    v.internalName = j.at("internalName").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.sumId = j.at("sumId").get<uint64_t_t>();
    v.acctId = j.at("acctId").get<uint64_t_t>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string_t>();
  }
  inline std::string to_string(const BasePublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
