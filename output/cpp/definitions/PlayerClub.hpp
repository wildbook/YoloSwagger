#pragma once
#include <json.hpp>
#include <optional>
#include "ClubMember.hpp"
#include "ClubMemberLists.hpp"
#include "ClubPermissions.hpp"
#include "ClubRole.hpp"
namespace leagueapi {
  struct PlayerClub_t {
    std::string jid;
    int64_t created;
    ClubPermissions_t permissions;
    ClubRole_t role;
    std::string description;
    std::string key;
    bool isClubTagEligible;
    ClubMember_t owner;
    int64_t lastModified;
    ClubMemberLists_t members;
    std::string name;
    std::string motd;
    bool primary;
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub_t& v) {
    j["jid"] = v.jid;
    j["created"] = v.created;
    j["permissions"] = v.permissions;
    j["role"] = v.role;
    j["description"] = v.description;
    j["key"] = v.key;
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["owner"] = v.owner;
    j["lastModified"] = v.lastModified;
    j["members"] = v.members;
    j["name"] = v.name;
    j["motd"] = v.motd;
    j["primary"] = v.primary;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub_t& v) {
    v.jid = j.at("jid").get<std::string>();
    v.created = j.at("created").get<int64_t>();
    v.permissions = j.at("permissions").get<ClubPermissions_t>();
    v.role = j.at("role").get<ClubRole_t>();
    v.description = j.at("description").get<std::string>();
    v.key = j.at("key").get<std::string>();
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>();
    v.owner = j.at("owner").get<ClubMember_t>();
    v.lastModified = j.at("lastModified").get<int64_t>();
    v.members = j.at("members").get<ClubMemberLists_t>();
    v.name = j.at("name").get<std::string>();
    v.motd = j.at("motd").get<std::string>();
    v.primary = j.at("primary").get<bool>();
    v.tag = j.at("tag").get<std::string>();
  }
  inline std::string to_string(const PlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
