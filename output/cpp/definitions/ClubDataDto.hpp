#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    ClubPermissions_t permissionMap;
    std::string jid;
    std::string motd;
    std::string clubKey;
    int64_t createdTs;
    int64_t lastModifiedTs;
    std::string name;
    std::string tag;
    std::string role;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["permissionMap"] = v.permissionMap;
    j["jid"] = v.jid;
    j["motd"] = v.motd;
    j["clubKey"] = v.clubKey;
    j["createdTs"] = v.createdTs;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["name"] = v.name;
    j["tag"] = v.tag;
    j["role"] = v.role;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
    v.jid = j.at("jid").get<std::string>();
    v.motd = j.at("motd").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.createdTs = j.at("createdTs").get<int64_t>();
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.role = j.at("role").get<std::string>();
    v.description = j.at("description").get<std::string>();
  }
  inline std::string to_string(const ClubDataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
