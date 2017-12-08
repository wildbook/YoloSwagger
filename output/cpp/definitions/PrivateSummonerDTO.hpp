#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    std::string internalName;
    bool displayEloQuestionaire;
    std::string name;
    bool tutorialFlag;
    int32_t profileIconId;
    uint64_t sumId;
    uint64_t acctId;
    std::string previousSeasonHighestTier;
    bool nameChangeFlag;
    bool advancedTutorialFlag;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["internalName"] = v.internalName;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
    j["name"] = v.name;
    j["tutorialFlag"] = v.tutorialFlag;
    j["profileIconId"] = v.profileIconId;
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.internalName = j.at("internalName").get<std::string>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
  }
  inline std::string to_string(const PrivateSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
