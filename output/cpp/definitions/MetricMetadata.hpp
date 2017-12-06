#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
#include "MetricPriority.hpp"
#include "MetricType.hpp"
#include "MetricDataType.hpp"
#include "AggregationType.hpp"
#include "MetricMetadataAlert.hpp"
namespace leagueapi {
  struct MetricMetadata_t {
    MetricType_t type;
    MetricMetadataNotify_t notify;
    MetricDataType_t data_type;
    AggregationType_t transientAggregation;
    uint32_t sample_window_ms;
    std::vector<MetricMetadataAlert_t> alerts;
    std::string destination;
    std::string info;
    MetricPriority_t priority;
    std::string pretty_name;
    std::string units;
    uint32_t period;
    std::string category;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata_t& v) {
    j["type"] = v.type;
    j["notify"] = v.notify;
    j["data_type"] = v.data_type;
    j["transientAggregation"] = v.transientAggregation;
    j["sample_window_ms"] = v.sample_window_ms;
    j["alerts"] = v.alerts;
    j["destination"] = v.destination;
    j["info"] = v.info;
    j["priority"] = v.priority;
    j["pretty_name"] = v.pretty_name;
    j["units"] = v.units;
    j["period"] = v.period;
    j["category"] = v.category;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata_t& v) {
    v.type = j.at("type").get<MetricType_t>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.data_type = j.at("data_type").get<MetricDataType_t>();
    v.transientAggregation = j.at("transientAggregation").get<AggregationType_t>();
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>();
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert_t>>();
    v.destination = j.at("destination").get<std::string>();
    v.info = j.at("info").get<std::string>();
    v.priority = j.at("priority").get<MetricPriority_t>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.units = j.at("units").get<std::string>();
    v.period = j.at("period").get<uint32_t>();
    v.category = j.at("category").get<std::string>();
    v.description = j.at("description").get<std::string>();
  }
}
