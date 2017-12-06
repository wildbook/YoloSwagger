#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  struct MetricMetadataAlert_t {
    std::string description;
    std::string info;
    std::string level;
    double max;
    double min;
    MetricMetadataNotify_t notify;
    std::string pretty_name;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert_t& v) {
    j["description"] = v.description;
    j["info"] = v.info;
    j["level"] = v.level;
    j["max"] = v.max;
    j["min"] = v.min;
    j["notify"] = v.notify;
    j["pretty_name"] = v.pretty_name;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert_t& v) {
    v.description = j.at("description").get<std::string>();
    v.info = j.at("info").get<std::string>();
    v.level = j.at("level").get<std::string>();
    v.max = j.at("max").get<double>();
    v.min = j.at("min").get<double>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
  }
}
