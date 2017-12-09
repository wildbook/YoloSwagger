#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicRosterDTO_t {
    std::vector<uint64_t> memberIds;
    int32_t logoColor;
    std::string shortName;
    int64_t id;
    int32_t logo;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const PublicRosterDTO_t& v) {
    j["memberIds"] = v.memberIds;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
    j["id"] = v.id;
    j["logo"] = v.logo;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, PublicRosterDTO_t& v) {
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const PublicRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
