#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    std::string description;
    std::string tag;
    int64_t createdTs;
    std::string role;
    std::string clubKey;
    int64_t lastModifiedTs;
    ClubPermissions_t permissionMap;
    std::string motd;
    std::string name;
    std::string jid;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["description"] = v.description;
    j["tag"] = v.tag;
    j["createdTs"] = v.createdTs;
    j["role"] = v.role;
    j["clubKey"] = v.clubKey;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["permissionMap"] = v.permissionMap;
    j["motd"] = v.motd;
    j["name"] = v.name;
    j["jid"] = v.jid;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.description = j.at("description").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.createdTs = j.at("createdTs").get<int64_t>();
    v.role = j.at("role").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>();
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
    v.motd = j.at("motd").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.jid = j.at("jid").get<std::string>();
  }
  inline std::string to_string(const ClubDataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
