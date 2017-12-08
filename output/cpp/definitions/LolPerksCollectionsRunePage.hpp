#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksCollectionsRune.hpp"
namespace leagueapi {
  struct LolPerksCollectionsRunePage_t {
    bool_t current;
    uint32_t_t id;
    std::vector<LolPerksCollectionsRune_t> runes;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolPerksCollectionsRunePage_t& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["runes"] = v.runes;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPerksCollectionsRunePage_t& v) {
    v.current = j.at("current").get<bool_t>();
    v.id = j.at("id").get<uint32_t_t>();
    v.runes = j.at("runes").get<std::vector<LolPerksCollectionsRune_t>>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolPerksCollectionsRunePage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
