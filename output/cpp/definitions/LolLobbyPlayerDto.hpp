#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  struct LolLobbyPlayerDto_t {
    std::optional<std::string_t> accountToken;
    std::optional<std::string_t> inventoryToken;
    std::optional<std::string_t> leaguesToken;
    std::string_t platformId;
    std::optional<LolLobbyPartyDto_t> currentParty;
    std::optional<std::string_t> summonerToken;
    uint64_t_t version;
    std::string_t puuid;
    std::optional<std::vector<LolLobbyPartyMemberDto_t>> parties;
    int64_t_t eligibilityHash;
    uint64_t_t summonerId;
    uint64_t_t createdAt;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerDto_t& v) {
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    j["platformId"] = v.platformId;
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
    j["version"] = v.version;
    j["puuid"] = v.puuid;
    if(v.parties)
      j["parties"] = *v.parties;
    j["eligibilityHash"] = v.eligibilityHash;
    j["summonerId"] = v.summonerId;
    j["createdAt"] = v.createdAt;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerDto_t& v) {
    if(auto it = j.find("accountToken"); it != j.end() && !it->is_null())
      v.accountToken = it->get<std::string_t>();
    if(auto it = j.find("inventoryToken"); it != j.end() && !it->is_null())
      v.inventoryToken = it->get<std::string_t>();
    if(auto it = j.find("leaguesToken"); it != j.end() && !it->is_null())
      v.leaguesToken = it->get<std::string_t>();
    v.platformId = j.at("platformId").get<std::string_t>();
    if(auto it = j.find("currentParty"); it != j.end() && !it->is_null())
      v.currentParty = it->get<LolLobbyPartyDto_t>();
    if(auto it = j.find("summonerToken"); it != j.end() && !it->is_null())
      v.summonerToken = it->get<std::string_t>();
    v.version = j.at("version").get<uint64_t_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    if(auto it = j.find("parties"); it != j.end() && !it->is_null())
      v.parties = it->get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.createdAt = j.at("createdAt").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyPlayerDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
