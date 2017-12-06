#pragma once
#include <json.hpp>
#include <optional>
#include "MetricPriority.hpp"
#include "MetricMetadataNotify.hpp"
#include "AggregationType.hpp"
#include "MetricMetadataAlert.hpp"
#include "MetricDataType.hpp"
#include "MetricType.hpp"
namespace leagueapi {
  struct MetricMetadata_t {
    std::vector<MetricMetadataAlert_t> alerts;
    std::string category;
    MetricDataType_t data_type;
    std::string description;
    std::string destination;
    std::string info;
    MetricMetadataNotify_t notify;
    uint32_t period;
    std::string pretty_name;
    MetricPriority_t priority;
    uint32_t sample_window_ms;
    AggregationType_t transientAggregation;
    MetricType_t type;
    std::string units;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata_t& v) {
    j["alerts"] = v.alerts;
    j["category"] = v.category;
    j["data_type"] = v.data_type;
    j["description"] = v.description;
    j["destination"] = v.destination;
    j["info"] = v.info;
    j["notify"] = v.notify;
    j["period"] = v.period;
    j["pretty_name"] = v.pretty_name;
    j["priority"] = v.priority;
    j["sample_window_ms"] = v.sample_window_ms;
    j["transientAggregation"] = v.transientAggregation;
    j["type"] = v.type;
    j["units"] = v.units;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata_t& v) {
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert_t>>();
    v.category = j.at("category").get<std::string>();
    v.data_type = j.at("data_type").get<MetricDataType_t>();
    v.description = j.at("description").get<std::string>();
    v.destination = j.at("destination").get<std::string>();
    v.info = j.at("info").get<std::string>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.period = j.at("period").get<uint32_t>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.priority = j.at("priority").get<MetricPriority_t>();
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>();
    v.transientAggregation = j.at("transientAggregation").get<AggregationType_t>();
    v.type = j.at("type").get<MetricType_t>();
    v.units = j.at("units").get<std::string>();
  }
}
