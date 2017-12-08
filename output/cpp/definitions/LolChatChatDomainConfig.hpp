#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatDomainConfig_t {
    std::optional<std::string_t> CustomGameDomainName;
    std::optional<std::string_t> PostGameDomainName;
    std::optional<std::string_t> ChampSelectDomainName;
    std::optional<std::string_t> PublicDomainName;
    std::optional<std::string_t> TeamBuilderDomainName;
    std::optional<std::string_t> CustomTeamDomainName;
    std::optional<std::string_t> PrivateDomainName;
    std::optional<std::string_t> RankedTeamDomainName;
    std::optional<std::string_t> P2PDomainName;
    std::optional<std::string_t> ClubDomainName;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatDomainConfig_t& v) {
    if(v.CustomGameDomainName)
      j["CustomGameDomainName"] = *v.CustomGameDomainName;
    if(v.PostGameDomainName)
      j["PostGameDomainName"] = *v.PostGameDomainName;
    if(v.ChampSelectDomainName)
      j["ChampSelectDomainName"] = *v.ChampSelectDomainName;
    if(v.PublicDomainName)
      j["PublicDomainName"] = *v.PublicDomainName;
    if(v.TeamBuilderDomainName)
      j["TeamBuilderDomainName"] = *v.TeamBuilderDomainName;
    if(v.CustomTeamDomainName)
      j["CustomTeamDomainName"] = *v.CustomTeamDomainName;
    if(v.PrivateDomainName)
      j["PrivateDomainName"] = *v.PrivateDomainName;
    if(v.RankedTeamDomainName)
      j["RankedTeamDomainName"] = *v.RankedTeamDomainName;
    if(v.P2PDomainName)
      j["P2PDomainName"] = *v.P2PDomainName;
    if(v.ClubDomainName)
      j["ClubDomainName"] = *v.ClubDomainName;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatDomainConfig_t& v) {
    if(auto it = j.find("CustomGameDomainName"); it != j.end() && !it->is_null())
      v.CustomGameDomainName = it->get<std::string_t>();
    if(auto it = j.find("PostGameDomainName"); it != j.end() && !it->is_null())
      v.PostGameDomainName = it->get<std::string_t>();
    if(auto it = j.find("ChampSelectDomainName"); it != j.end() && !it->is_null())
      v.ChampSelectDomainName = it->get<std::string_t>();
    if(auto it = j.find("PublicDomainName"); it != j.end() && !it->is_null())
      v.PublicDomainName = it->get<std::string_t>();
    if(auto it = j.find("TeamBuilderDomainName"); it != j.end() && !it->is_null())
      v.TeamBuilderDomainName = it->get<std::string_t>();
    if(auto it = j.find("CustomTeamDomainName"); it != j.end() && !it->is_null())
      v.CustomTeamDomainName = it->get<std::string_t>();
    if(auto it = j.find("PrivateDomainName"); it != j.end() && !it->is_null())
      v.PrivateDomainName = it->get<std::string_t>();
    if(auto it = j.find("RankedTeamDomainName"); it != j.end() && !it->is_null())
      v.RankedTeamDomainName = it->get<std::string_t>();
    if(auto it = j.find("P2PDomainName"); it != j.end() && !it->is_null())
      v.P2PDomainName = it->get<std::string_t>();
    if(auto it = j.find("ClubDomainName"); it != j.end() && !it->is_null())
      v.ClubDomainName = it->get<std::string_t>();
  }
  inline std::string to_string(const LolChatChatDomainConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
