#pragma once
#include <json.hpp>
#include <optional>
#include "SeriesMediaDTO.hpp"
#include "SeriesAlertDTO.hpp"
namespace leagueapi {
  struct SeriesDTO_t {
    int64_t endDate;
    std::string id;
    std::vector<SeriesAlertDTO_t> warnings;
    SeriesMediaDTO_t media;
    std::string internalName;
    std::string description;
    int64_t startDate;
    std::string parentName;
    std::vector<std::string> tags;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const SeriesDTO_t& v) {
    j["endDate"] = v.endDate;
    j["id"] = v.id;
    j["warnings"] = v.warnings;
    j["media"] = v.media;
    j["internalName"] = v.internalName;
    j["description"] = v.description;
    j["startDate"] = v.startDate;
    j["parentName"] = v.parentName;
    j["tags"] = v.tags;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, SeriesDTO_t& v) {
    v.endDate = j.at("endDate").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO_t>>();
    v.media = j.at("media").get<SeriesMediaDTO_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.startDate = j.at("startDate").get<int64_t>();
    v.parentName = j.at("parentName").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.title = j.at("title").get<std::string>();
  }
  inline std::string to_string(const SeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
