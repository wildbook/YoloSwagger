#pragma once
#include <json.hpp>
#include <optional>
#include "ClubRole.hpp"
#include "ClubMember.hpp"
#include "ClubMemberLists.hpp"
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct PlayerClub_t {
    std::string description;
    ClubPermissions_t permissions;
    int64_t created;
    bool isClubTagEligible;
    int64_t lastModified;
    std::string name;
    ClubRole_t role;
    ClubMember_t owner;
    std::string tag;
    ClubMemberLists_t members;
    std::string key;
    std::string motd;
    bool primary;
    std::string jid;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub_t& v) {
    j["description"] = v.description;
    j["permissions"] = v.permissions;
    j["created"] = v.created;
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["lastModified"] = v.lastModified;
    j["name"] = v.name;
    j["role"] = v.role;
    j["owner"] = v.owner;
    j["tag"] = v.tag;
    j["members"] = v.members;
    j["key"] = v.key;
    j["motd"] = v.motd;
    j["primary"] = v.primary;
    j["jid"] = v.jid;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub_t& v) {
    v.description = j.at("description").get<std::string>();
    v.permissions = j.at("permissions").get<ClubPermissions_t>();
    v.created = j.at("created").get<int64_t>();
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>();
    v.lastModified = j.at("lastModified").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.role = j.at("role").get<ClubRole_t>();
    v.owner = j.at("owner").get<ClubMember_t>();
    v.tag = j.at("tag").get<std::string>();
    v.members = j.at("members").get<ClubMemberLists_t>();
    v.key = j.at("key").get<std::string>();
    v.motd = j.at("motd").get<std::string>();
    v.primary = j.at("primary").get<bool>();
    v.jid = j.at("jid").get<std::string>();
  }
  inline std::string to_string(const PlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
