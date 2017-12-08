#pragma once
#include <json.hpp>
#include <optional>
#include "SeriesAlertDTO.hpp"
#include "SeriesMediaDTO.hpp"
namespace leagueapi {
  struct SeriesDTO_t {
    int64_t_t startDate;
    std::string_t internalName;
    int64_t_t endDate;
    std::string_t description;
    std::vector<std::string> tags;
    SeriesMediaDTO_t media;
    std::string_t parentName;
    std::vector<SeriesAlertDTO_t> warnings;
    std::string_t title;
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const SeriesDTO_t& v) {
    j["startDate"] = v.startDate;
    j["internalName"] = v.internalName;
    j["endDate"] = v.endDate;
    j["description"] = v.description;
    j["tags"] = v.tags;
    j["media"] = v.media;
    j["parentName"] = v.parentName;
    j["warnings"] = v.warnings;
    j["title"] = v.title;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, SeriesDTO_t& v) {
    v.startDate = j.at("startDate").get<int64_t_t>();
    v.internalName = j.at("internalName").get<std::string_t>();
    v.endDate = j.at("endDate").get<int64_t_t>();
    v.description = j.at("description").get<std::string_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.media = j.at("media").get<SeriesMediaDTO_t>();
    v.parentName = j.at("parentName").get<std::string_t>();
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO_t>>();
    v.title = j.at("title").get<std::string_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const SeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
