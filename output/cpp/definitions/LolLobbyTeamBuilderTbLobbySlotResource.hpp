#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbySlotResource_t {
    std::string_t summonerName;
    std::vector<std::string> draftPositionPreferences;
    bool_t autoFillProtectedForPromos;
    bool_t autoFillEligible;
    bool_t autoFillProtectedForStreaking;
    int32_t_t slotId;
    std::optional<std::string_t> excludedPositionPreference;
    bool_t showPositionExcluder;
    bool_t autoFillProtectedForSoloing;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    j["summonerName"] = v.summonerName;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["slotId"] = v.slotId;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool_t>();
    v.slotId = j.at("slotId").get<int32_t_t>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool_t>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbySlotResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
