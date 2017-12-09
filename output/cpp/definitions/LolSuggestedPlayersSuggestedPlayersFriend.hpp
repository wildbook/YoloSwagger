#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersFriend_t {
    uint64_t id;
    std::string name;
    std::string availability;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["availability"] = v.availability;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.availability = j.at("availability").get<std::string>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
