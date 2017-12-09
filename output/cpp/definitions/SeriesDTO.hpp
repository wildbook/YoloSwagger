#pragma once
#include <json.hpp>
#include <optional>
#include "SeriesAlertDTO.hpp"
#include "SeriesMediaDTO.hpp"
namespace leagueapi {
  struct SeriesDTO_t {
    std::vector<SeriesAlertDTO_t> warnings;
    std::string description;
    int64_t endDate;
    std::string parentName;
    std::vector<std::string> tags;
    std::string title;
    std::string id;
    int64_t startDate;
    std::string internalName;
    SeriesMediaDTO_t media;
  };

  inline void to_json(nlohmann::json& j, const SeriesDTO_t& v) {
    j["warnings"] = v.warnings;
    j["description"] = v.description;
    j["endDate"] = v.endDate;
    j["parentName"] = v.parentName;
    j["tags"] = v.tags;
    j["title"] = v.title;
    j["id"] = v.id;
    j["startDate"] = v.startDate;
    j["internalName"] = v.internalName;
    j["media"] = v.media;
  }

  inline void from_json(const nlohmann::json& j, SeriesDTO_t& v) {
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO_t>>();
    v.description = j.at("description").get<std::string>();
    v.endDate = j.at("endDate").get<int64_t>();
    v.parentName = j.at("parentName").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.title = j.at("title").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.startDate = j.at("startDate").get<int64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.media = j.at("media").get<SeriesMediaDTO_t>();
  }
  inline std::string to_string(const SeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
